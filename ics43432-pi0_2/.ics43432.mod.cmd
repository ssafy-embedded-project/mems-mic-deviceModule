cmd_/home/pi/ics43432/ics43432.mod := printf '%s\n'   ics43432.o | awk '!x[$$0]++ { print("/home/pi/ics43432/"$$0) }' > /home/pi/ics43432/ics43432.mod
