#include<stdio.h>
int main()
 { 
int arr[2][3][2]={{{2,4},{7,8},{3,4},}, {{2,2},{2,3},{3,4}, }};
printf(" %d",**(*arr+2)+2+7);
}
