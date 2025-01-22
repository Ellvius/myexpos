#!/bin/bash

# Compile spl files

cd "$HOME/myexpos/spl" || { echo "Failed to enter SPL directory"; exit 1;}

for file in "$HOME/myexpos/modules"/**/*.spl; do
    [ -f "$file" ] || continue
    ./spl "$file" || { echo "Compilation failed for $file"; exit 1; }
done


# Compile expl files

cd "$HOME/myexpos/expl" || { echo "Failed to enter EXPL directory"; exit 1; }

for file in "$HOME/myexpos/modules"/**/*.expl; do
    [ -f "$file" ] || continue 
    ./expl "$file" || { echo "Compilation failed for $file"; exit 1; }
done


# Load all programs

cd "$HOME/myexpos/xfs-interface" || { echo "Failed to enter XFS-Interface"; exit 1; }
./xfs-interface run $HOME/myexpos/loadfile

cd "$HOME/myexpos/xsm"
./xsm "$@"