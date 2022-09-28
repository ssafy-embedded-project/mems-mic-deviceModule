cmd_/home/pi/ics43432/Module.symvers := sed 's/\.ko$$/\.o/' /home/pi/ics43432/modules.order | scripts/mod/modpost -m -a  -o /home/pi/ics43432/Module.symvers -e -i Module.symvers   -T -
