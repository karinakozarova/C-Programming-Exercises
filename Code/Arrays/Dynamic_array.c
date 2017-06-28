#include <stdio.h>
#include <stdlib.h>

struct dynamic_arr_t
{
	int *arr;
	int size;
};

struct dynamic_arr_t generate(int);
void free_dynamic_arr(struct dynamic_arr_t*);
struct dynamic_arr_t filter_even(struct dynamic_arr_t);
struct dynamic_arr_t map_sqr(struct dynamic_arr_t);
struct dynamic_arr_t sqr_of_odds(struct dynamic_arr_t);
int reduce_sum(struct dynamic_arr_t);

int main()
{
	struct dynamic_arr_t array;
	struct dynamic_arr_t even;
	struct dynamic_arr_t odds;
	int i,p=10;
	array=generate(p);
	//array=filter_even(array);
	//array=map_sqr(array);
	//array=sqr_of_odds(array);
	printf("%d\n",reduce_sum(array));
	free_dynamic_arr(&array);
	return 0;
}

struct dynamic_arr_t generate(int num)
{
	struct dynamic_arr_t array;
	int i;
	array.size=num;
	array.arr=malloc(sizeof(int)*array.size);
	for(i=0;i<array.size;i++)
	{
		*(array.arr+i)=i+1;
	}
	return array;
}
void free_dynamic_arr(struct dynamic_arr_t *array)
{
	free(array->arr);
	array->arr=NULL;
}
struct dynamic_arr_t filter_even(struct dynamic_arr_t array)
{
	struct dynamic_arr_t even;
	int i,j=0,size=1;
	even.arr=malloc(sizeof(int));
	for(i=0;i<array.size;i++)
	{
		if(*(array.arr+i)%2==0)
		{
			size++;
			even.arr=realloc(even.arr,size);
			*(even.arr+j)=*(array.arr+i);
			j++;
		}
	}
	even.size=j;
	free_dynamic_arr(&array);
	return even;
}
struct dynamic_arr_t map_sqr(struct dynamic_arr_t array)
{
	int i=0;
	struct dynamic_arr_t sqr;
	sqr.size=array.size;
	sqr.arr=malloc(sizeof(int)*sqr.size);
	for(i=0;i<array.size;i++)
	{
		*(sqr.arr+i)=*(array.arr+i)**(array.arr+i);
	}
	free_dynamic_arr(&array);
	return sqr;
}
struct dynamic_arr_t sqr_of_odds(struct dynamic_arr_t array)
{
	int i,j,size=0,flag=1,a=0;
	struct dynamic_arr_t sqr_odds;
	struct dynamic_arr_t even;
	even=filter_even(array);
	sqr_odds.arr=malloc(sizeof(int));
	for(i=0;i<array.size;i++)
	{
		for(j=0;j<even.size;j++)
		{
			if(*(array.arr+i)==*(even.arr+j))
			{
				flag--;
				break;
			}
		}
		if(flag==1)
		{
			size++;
			sqr_odds.arr=realloc(sqr_odds.arr,size);
			*(sqr_odds.arr+a)=*(array.arr+i);
			a++;
		}
		flag=1;
	}
	free_dynamic_arr(&even);
	sqr_odds.size=a;
	sqr_odds=map_sqr(sqr_odds);
	return sqr_odds;
}
int reduce_sum(struct dynamic_arr_t array)
{
	int i=0,sum=0;
	for(i=0;i<array.size;i++)
	{
		sum+=*(array.arr+i);
	}
	return sum;
}
