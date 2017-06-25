//TODO := Math still to be worked out error cases are to be handled
//FIXME := The interval for acceptable points still not handled


#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

float area_of_triangle(float x1,float y1,float x2,float y2,float x3,float y3){

      //for simplicity purposes i wont consider the 1/2 factor
      float A = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
      return A;

}

int square_region(float x,float y,float x1,float y1,float x3,float y3){

      float x2 = (x1 + x3 + y3 - y1)/2;
      float y2 = (y1 + y3 + x1 - x3)/2;
      float x4 = (x1 + x3 + y1 - y3)/2;
      float y4 = (y1 + y3 + x3 - x1)/2;

      float f1  = area_of_triangle(x,y,x1,y1,x2,y2);
      float f2  = area_of_triangle(x,y,x2,y2,x3,y3);
      float f3  = area_of_triangle(x,y,x3,y3,x4,y4);
      float f4  = area_of_triangle(x,y,x4,y4,x1,y1);

      if((f1 >= 0 && f2 >= 0 && f3 >= 0 && f4 >= 0) || (f1 < 0 && f2 < 0 && f3 < 0 && f4 < 0)){
                  return 1;
      }
      else{
                  return 0;
      }

}



int circle_region(float x,float y,float xc,float yc,float r){

      float d = ((x - xc)*(x - xc)) + ((y - yc)*(y - yc));

      if(d <= (r*r)){
            return 1;
      }
      return 0;

}

// void error_check_circle(int x,int y,int xc,int yc,int r){
//
//       float x1 = (float)x - 0.5;
//       float y1 = (float)y - 0.5;
//       float x2 = (float)x + 0.5;
//       float y2 = (float)y + 0.5;
//
//       if(circle_region(x1,y1,xc,rc,r) ==1){
//               cout<<'#'<<endl;
//       }
//       else{
//               cout<<"."<<endl;
//       }
//
//
//
//
// }


int main( ){

    int h,w;
    float r,xc,yc,x1,y1,x3,y3;
    cin>>w>>h;
    cin>>xc>>yc>>r;
    cin>>x1>>y1>>x3>>y3;

    char pattern[w][h];

    for(int i = 0;i < h;i++){
                 for(int j = 0;j < w;j++){
                              pattern[i][j] = '.';
                              cout<<pattern[i][j];
                 }
                 cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    for(float y = 0;y < h;y+=1){
                 for(float x = 0;x < w;x+=1){
                              int check_circle = circle_region(x,y,xc,yc,r);
                              int check_square = square_region(x,y,x1,y1,x3,y3);
                              //int err_s = circle_region(x-0.5,y-0);
                              if(check_circle == 1 || check_square == 1){
                                      cout<<"#";
                                      //error_check_circle(x,y,xc,yc,r);
                              }
                              else{
                                      cout<<".";
                              }


                 }
                 cout<<endl;
    }


    return 0;
}
