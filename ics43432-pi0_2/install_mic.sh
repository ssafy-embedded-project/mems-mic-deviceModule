#!/bin/sh

ConfigFile='/Config.txt'
echo "...copying device module..."
cp ics43432.ko /lib/modules/$(shell uname -r)
echo "...writing dependency..."
depmod -a
echo "...copying devicetree overlay..."
cp i2s-soundcard.dtbo /boot/overlays

echo "...editting config.txt..."
sed -i 's/#dtparam=i2s=on/dtparam=i2s=on/' $File
sed -i 's/#dtparam=audio=on/dtparam=audio=on/' $File
grep -q 'dtoverlay=i2s-soundcard,alsaname=i2sPiSound' $File || echo 'dtoverlay=i2s-soundcard,alsaname=i2sPiSound' >> $File





