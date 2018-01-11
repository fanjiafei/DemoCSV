#include <fstream>
using namespace std;

int main(){
ofstream ofile;

ofile.open("/home/fan/Desktop/result.csv",ios::out | ios::trunc);      //判断.csv文件是否存在,不存在则建立
ofile<<"序号,第一列,第二列,第三列,第四列,第五列"<<endl;   //如果每列中间隔一空列,就是"序号,,第一列,,第二列,,第三列,,第四列,,第五列"<<endl;
int a[10][5];
for(int i=0;i<10;i++)
{
    for(int j=0;j<5;j++)
    {
            a[i][j]=i*i+j;
    }
}
for(int i=0;i<10;i++)//说明有11行6列,序列号为1至10
{
    ofile<<i+1<<",";
    for(int j=0;j<5;j++)
    {
           ofile<<a[i][j]<<",";
    }
    ofile<<endl;
}
ofile.close();
}
