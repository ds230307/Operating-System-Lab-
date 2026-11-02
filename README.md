# Operating-System-Lab-
#!/bin/bash

if [ -d "$1" ]
then
    echo "It is a directory"
elif [ -f "$1" ]
then
    echo "It is a file"
else
    echo "File or directory does not exist"
fi



#!/bin/bash

for file in "$@"
do
    if [ -e "$file" ]
    then
        newname=$(echo "$file" | tr '[:lower:]' '[:upper:]')
        if [ "$file" != "$newname" ]
        then
            if [ -e "$newname" ]
            then
                echo "Cannot rename: $newname already exists"
            else
                mv -- "$file" "$newname"
                echo "$file changed to $newname"
            fi
        fi
    else
        echo "$file does not exist"
    fi
done
