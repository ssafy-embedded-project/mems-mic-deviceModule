cmd_/home/pi/ics43432/modules.order := {   echo /home/pi/ics43432/ics43432.ko; :; } | awk '!x[$$0]++' - > /home/pi/ics43432/modules.order
