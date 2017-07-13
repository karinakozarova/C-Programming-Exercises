#include <stdio.h>

int cut_one(int x,int y,int w,int h);
int cut_two(int x,int y,int w,int h);

int main(){
  // input
  int x = -1,y = -1,w = -1,h = -1;
  /*do{
    scanf("%d",&x);
  } while(x <= 0);

  do{
    scanf("%d",&y);
  } while(y <= 0);

  do{
    scanf("%d",&w);
  } while(w <= 0);

  do{
    scanf("%d",&h);
  } while(h <= 0);
  */
  x = 3,y = 1,w = 2,h = 5;

  // show cutting cordinates
  cut_one(x,y,w,h);
  cut_two(x,y,w,h);

  return 0;
}


int cut_two(int x,int y,int w,int h){
  int number_of_tiles = (w*h)/(x*y);

    int cutting_point = 0,count = 0;
    int cutting_cordinates_w_x[number_of_tiles];
    int cutting_cordinates_w_y[number_of_tiles];

  for (int i = 0; cutting_point<w; ++i)
  {
      cutting_point += y;
      if (cutting_point > w)
      {
        break;
      }
      cutting_cordinates_w_x[i] = cutting_point;
      count++;
  }


  cutting_point = 0;
  int counter = 0;
  for (int i = 0; cutting_point<h; ++i)
  {
      cutting_point += x;
      if (cutting_point > h)
      {
        break;
      }
      cutting_cordinates_w_y[i] = cutting_point;
      counter++;
  }
  printf("\nX cutting points: \n");
  for (int i = 0; i < count; ++i)
  {
      printf("%d\n",cutting_cordinates_w_x[i]);
  }

    printf("\nY cutting points: \n");
  for (int i = 0; i < counter; ++i)
  {
      printf("%d\n",cutting_cordinates_w_y[i]);
  }
   number_of_tiles = count*counter;
  printf("\nNumber of tiles: %d\n",number_of_tiles);
  return number_of_tiles;
}

int cut_one(int x,int y,int w,int h){
    // first way to cut them
  int number_of_tiles = (w*h)/(x*y);

  int cutting_cordinates_w_x[number_of_tiles];
  int cutting_cordinates_w_y[number_of_tiles];
  int cutting_cordinates_h[number_of_tiles];
  int cutting_point = 0,count = 0;

  for (int i = 0; cutting_point<w; ++i)
  {
      cutting_point += x;
      if (cutting_point > w)
      {
        break;
      }
      cutting_cordinates_w_x[i] = cutting_point;
      count++;
  }
  cutting_point = 0;
  int counter = 0;
  for (int i = 0; cutting_point<h; ++i)
  {
      cutting_point += y;
      if (cutting_point > h)
      {
        break;
      }
      cutting_cordinates_w_y[i] = cutting_point;
      counter++;
  }

  printf("\nX cutting points: \n");
  for (int i = 0; i < count; ++i)
  {
      printf("%d\n",cutting_cordinates_w_x[i]);
  }

  printf("\nY cutting points: \n");
  for (int i = 0; i < counter; ++i)
  {
      printf("%d\n",cutting_cordinates_w_y[i]);
  }

  number_of_tiles = count*counter;
  printf("\nNumber of tiles: %d\n",number_of_tiles);
  return number_of_tiles;
}
