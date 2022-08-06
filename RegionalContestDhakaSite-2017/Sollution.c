#include<stdio.h>
    int main(){
     int T;
     scanf("%d",&T);          //Input case no

        int i;

        for (i = 1; i <= T; i++) {
            int j,k,l;
            int D,M,Y,QY ;
            int Case=0;
            scanf("%d%d%d%d",&D,&M,&Y,&QY);     //Input Date,Month,Year,Query Year

            if (M == 2 && D == 29) {       //if Month is February and date is 29               
                for (j = Y + 1; j <= QY; j++) {
                    if ((j%4==0) && ((j%400==0) || (j%100!=0))) {
                            Case = Case + 1;
                    }
                }
               printf("Case %d: %d",i,Case);
            }

            else if (M == 2 && D<29) {       //if Month is february but date is not 29
                for (k = Y + 1; k <= QY; k++) {
                    Case = Case + 1;
                }
               printf("Case %d: %d",i,Case);
            }
            else if(M!=2){      //if Month is not February 
    
                    for(l=Y+1;l<=QY;l++){
                        Case=Case+1;
                    }
                  printf("Case %d: %d",i,Case);
            }
        }

        return 0;
    }
