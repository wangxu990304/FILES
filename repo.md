### 安装repo
#### 1.安装git
```
sudo apt install git
```
#### 2.安装python
```
sudo apt update
sudo apt install python3-pip
pip3 install --upgrade pip
```
#### 3.创建目录并添加可执行权限
```
# 创建一个目录用于存放 repo 工具
mkdir ~/bin
# 将该目录添加到系统的 PATH 环境变量中，这样系统就能找到 repo 命令
PATH=~/bin:$PATH
```
```
# 检测环境添加是否顺利
echo $PATH | grep -q "~/bin"
if [ $? -eq 0 ]; then
    echo "~/bin is in the PATH"
else
    echo "~/bin is not in the PATH"
fi
# 可以直接在环境文件中添加来修改
vim ~/.bashrc
# 在文件末尾添加
export PATH=~/bin:$PATH
# 使配置生效
source ~/.bashrc
```
#### 4.使用 curl 工具从官方源下载 repo 脚本，并将其保存到指定目录
```
# 下载 repo 脚本
curl https://storage.googleapis.com/git-repo-downloads/repo > ~/bin/repo
```
#### 5.赋予 repo 脚本可执行权限
```
chmod a+x ~/bin/repo
```
#### 6.检测是否成功安装
```
repo --version
```
##### 可能出现的问题
运行**repo --version**出现
```
<repo not installed>
repo launcher version 2.50
       (from /home/tsbj/bin/repo)
git 2.25.1
Python 3.8.10 (default, Jan 17 2025, 14:40:23) 
[GCC 9.4.0]
OS Linux 5.15.0-131-generic (#141~20.04.1-Ubuntu SMP Thu Jan 16 18:38:51 UTC 2025)
CPU x86_64 (x86_64)
Bug reports: https://issues.gerritcodereview.com/issues/new?component=1370071
```
进行初始化命令后正常
```
repo init -u https://android.googlesource.com/platform/manifest
```
公司内部配置教程网址
http://192.168.9.9:32768/wiki/index.php/Dlrepo