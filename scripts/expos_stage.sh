#!/bin/bash

# Ensure at least one argument is provided
if [ $# -eq 0 ]; then
    echo "Usage: $0 <stage_name>"
    exit 1
fi

STAGE_DIR="$HOME/myexpos/stages/$1"

# Create stage directory structure
mkdir -p "$STAGE_DIR/assgn" "$STAGE_DIR/scripts" "$STAGE_DIR/expl" "$STAGE_DIR/spl"

# Move SPL files
cd "$HOME/myexpos/spl" || { echo "Failed to enter SPL directory"; exit 1; }

shopt -s globstar  # Enable recursive globbing
for file in "$HOME/myexpos/src"/**/*.spl; do
    [ -f "$file" ] || continue
    cp "$file" "$STAGE_DIR/spl/"
done

# Move EXPL files
cd "$HOME/myexpos/expl" || { echo "Failed to enter EXPL directory"; exit 1; }

for file in "$HOME/myexpos/src"/**/*.expl; do
    [ -f "$file" ] || continue
    cp "$file" "$STAGE_DIR/expl/"
done

echo "Copied all files to $1 successfully"