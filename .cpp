#include<iostream>
using namespace std;

void sort(int n,int list[][2])  
{  
     int output,in,st,st2;  
       
       for(output=0;output<n-1;output++)  
       {  
        for(in=output+1;in<n;in++)  
        {  
         if(list[in][1]<list[output][1])  
         {   
          st=list[output][0];  
          st2=list[output][1];  
          list[output][0]=list[in][0];  
          list[output][1]=list[in][1];  
  
          list[in][0]=st;  
          list[in][1]=st2;  
         }                        
        }  
       }  
}          
int main(){
    int n;
    cin>>n;
    int s[n],f[n];
    for (int i = 0; i < n; i++){
        cin>>s[i];
    }
    for (int i = 0; i < n; i++){
        cin>>f[i];
    }
    int meet[n][2];
    for (int i = 0; i < n; i++){
        meet[i][0]=s[i];
        meet[i][1]=f[i];
    }
    sort(n,meet);
    int x=0,y;
    int p=0;
    int out[n][2];
    for (int y = 1; y < n; y++){   
        if(meet[x][1]<=meet[y][0]){
                out[p][0]=meet[x][0];
                out[p][1]=meet[x][1];
                p=p+1;
                x=y;
                y=1;
        }
    }
    out[p][0]=meet[x][0];
    out[p][1]=meet[x][1];
    for (int i = 0; i < p+1; i++){
        coutput<<out[i][0]<<" ";
        coutput<<out[i][1]<<endl;
    }
    
}
