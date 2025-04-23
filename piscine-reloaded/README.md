## ex00
##### Create directories
mkdir test0 test2

##### Create files
touch test1 test3 test4 test5

##### Make symbolic link
ln -s test0 test6

##### Set permissions
chmod 751 test0
chmod 764 test1
chmod 544 test2
chmod 404 test3
chmod 641 test4
chmod 404 test5

##### Set test3 and test5 to have the same inode
ln test3 test5

##### Finally create the tar file
tar -cf exo.tar *


## ex01
echo "Z" > z


## ex02
find . -type f \( -name "*~" -o -name "#*#" \) -print -delete

//find . - 从当前目录（.）开始搜索
//-type f - 只查找常规文件（不包括目录、符号链接等）
//\( ... \) - 这是一个分组，将多个条件组合在一起（注意反斜杠是用来转义括号，使shell不会将其解释为特殊字符）
//-name "*~" - 匹配所有以波浪号（~）结尾的文件名
//-o - 逻辑"或"（OR）操作符，表示匹配前面的模式或后面的模式
//-name "#*#" - 匹配所有以井号（#）开头并以井号结尾的文件名
//-print - 将找到的每个文件路径打印到标准输出
//-delete - 删除找到的文件


## ex03
#!/bin/sh
find . -type f -name "*.sh" | rev | cut -d '/' -f 1 | cut -d '.' -f 2- | rev

//#!/bin/sh - 这是脚本的 shebang 行，指定使用 /bin/sh 解释器来执行脚本。
//find . -type f -name "*.sh" - 这个命令在当前目录（.）及其子目录中搜索所有文件类型（-type f）的文件，且文件名符合 *.sh 模式（即以 .sh 结尾的文件）。
//| - 管道符号，将前一个命令的输出作为后一个命令的输入。
//rev - 将输入的每一行字符都反转。例如 ./folder/script.sh 会变成 hs.tpircs/redlof/./
//cut -d '/' -f 1 - 使用 / 作为分隔符（-d '/'），取出第一个字段（-f 1）。在反转后的路径中，第一个字段是文件名的反转。例如从 hs.tpircs/redlof/./ 中提取 hs.tpircs。
//cut -d '.' -f 2- - 使用 . 作为分隔符，取出第二个及之后的所有字段。这样就移除了文件扩展名（反转后的 .sh 即 hs.）。例如从 hs.tpircs 中提取 tpircs。
//rev - 再次反转字符串，将之前反转的字符串恢复正常顺序。例如 tpircs 变回 script。


## ex04
#!/bin/sh
ifconfig | grep -w "ether" | cut -d ' ' -f 2


## ex05
echo "42" > "\?$*'MaRViN'*$?\"


## ex12
iterative_factorial = 4 * 3 * 2 * 1;



