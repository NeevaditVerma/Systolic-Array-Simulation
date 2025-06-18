#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(int argc, char *argv[])
{
    int M = stoi(argv[1]);
    int N = stoi(argv[2]);
    int p = stoi(argv[3]);
    int q = stoi(argv[4]);
    int r = stoi(argv[5]);
    int a[M][N];
    ofstream fout;
    string file_name="23125023_"+to_string(M)+"_"+to_string(N)+"_"+to_string(p)+"_"+to_string(q)+"_"+to_string(r)+".txt";
    fout.open(file_name);
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            a[i][j]=0;
        }
    }
    for(int T=1;T<=p+q+r-2;T++)
    {
        fout<<"T="<<T<<endl;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(i+j<=T-1 && a[i][j]<q)
                {
                    fout<<"["<<i<<","<<j<<"] ";
                    fout<<"A["<<i<<","<<a[i][j]<<"]*";
                    fout<<"B["<<a[i][j]++<<","<<j<<"]"<<endl;
                }
            }
        }
        fout<<endl;
    }
    fout.close();
    return 0;
}