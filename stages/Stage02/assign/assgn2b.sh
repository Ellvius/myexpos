#!/bin/bash

cd $HOME/myexpos/xfs-interface || exit
./xfs-interface rm sample.dat 
./xfs-interface dump --inodeusertable 
./xfs-interface dump --rootfile
./xfs-interface df 
./xfs-interface exit
