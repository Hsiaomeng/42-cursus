// ex00
# Create directories
mkdir test0 test2

# Create files
touch test1 test3 test4 test5

# Make symbolic link
ln -s test0 test6

# Set permissions
chmod 751 test0
chmod 764 test1
chmod 544 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5

# Set test3 and test5 to have the same inode
ln test3 test5

# Finally create the tar file
tar -cf exo.tar *

// ex01
echo "Z" > z

//ex02
find . -type f \( -name "*~" -o -name "#*#" \) -print -delete

//ex03
#!/bin/sh
find . -type f -name "*.sh" | rev | cut -d '/' -f 1 | cut -d '.' -f 2- | rev

//ex04
#!/bin/sh
ifconfig | grep -w "ether" | cut -d ' ' -f 2

//ex05
echo "42" > "\?$*'MaRViN'*$?\"


//ex12
iterative_factorial = 4 * 3 * 2 * 1;



