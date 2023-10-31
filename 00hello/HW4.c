#include <stdio.h>

int canplaychess(int chess[8][8],int row,int col,int color){
    //8個方向的坐標
    int directions[][2]={{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};
//123456789
    //檢查每個方向
    for(int i=0;i<8;i++){
        int x=row+directions[i][0];
        int y=col+directions[i][1];

        //確認沒有超過邊界
        if(x>=0 && x<8 && y>=0 && y<8){
            //如果相鄰的位置是相反顏色，檢查延伸過去的位置有沒有同顏色可以夾擊
            if(chess[x][y]==3-color){
                while(x>=0 && x<8 && y>=0 && y<8 && chess[x][y]==3-color){
                    x+=directions[i][0];
                    y+=directions[i][1];
                }
                //如果找到同色的棋子可以夾擊，返回有效
                if(x>=0 && x<8 && y>=0 && y<8 && chess[x][y]==color){
                    return 1;
                }
            }
        }
    }

    //如果找不到同色棋夾擊，無效
    return 0;
}

int main(){
    int chess[8][8]={{0}};
    int row,col,color;

    //輸入棋盤狀態
    printf("請輸入8*8的棋盤狀態（0:空白，1:黑棋，2:白棋\n");
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++){
            scanf("%d",&chess[i][j]);
        }
    }
     //輸入座標
    printf("請輸入座標i,j\n");
    scanf("%d,%d",&row,&col);

    //輸入顏色
    printf("請輸入顏色（1:黑棋，2:白棋)\n");
    scanf("%d",&color);

    //判斷此座標的棋子顏色
    if(chess[row][col]==0){
        printf("(%d, %d)是空白\n",row,col);
    } else if (chess[row][col]==1){
        printf("(%d,%d)是黑棋\n",row,col);
    } else {
        printf("(%d, %d)是白棋\n",row,col);
    }

    //判斷此座標能不能下輸入顏色的棋子
    if(canplaychess(chess,row,col,color)) {
        printf("(%d,%d)能下%s棋子\n",row,col,(color==1)?"黑":"白");
    } else {
        printf("(%d,%d)不能下%s棋子\n",row,col,(color==1)?"黑":"白");
    }

    return 0;
}