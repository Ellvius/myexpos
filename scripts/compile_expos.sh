#!/bin/bash

# Compile spl files

cd "$HOME/myexpos/spl" || { echo "Failed to enter SPL directory"; exit 1;}
echo "Compiling spl files...";

for file in "$HOME/myexpos/src"/**/*.spl; do
    [ -f "$file" ] || continue
    echo "Compiling $file...";
    ./spl "$file" || { echo "Compilation failed for $file"; exit 1; }
done


# Compile expl files

cd "$HOME/myexpos/expl" || { echo "Failed to enter EXPL directory"; exit 1; }
echo "Compiling expl files...";

for file in "$HOME/myexpos/src"/**/*.expl; do
    [ -f "$file" ] || continue
    echo "Compiling $file...";
    ./expl "$file" || { echo "Compilation failed for $file"; exit 1; }
done

echo "Compilation completed!";
