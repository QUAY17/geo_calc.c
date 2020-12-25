#include "array_struct.h"

#include <stdio.h>



int main(void)

{

	int index, min, max, ave, h_max, h_min, h_ave;

	struct data_t data[SIZE];



	/* data initialization calls */

	init_array(data, 0, 'A', 23, 74);

	init_array(data, 1, 'B', 22, 64);

	init_array(data, 2, 'C', 19, 68);

	init_array(data, 3, 'D', 20, 76);

	init_array(data, 4, 'E', 22, 62);



	//print all structs

	print_struct(data, h_max, h_min, h_ave, max, min, ave);



	return 0;

}

/** initializes the array struct

 * @param a array struct

 * @param b index in array

 * @param c id of subject from struct

 * @param d age of subject from struct

 * @param e height of subject from struct

 */

void init_array(struct data_t data[], int index, char id, int years, int inches)

{



	data[index].subject = id;

	data[index].age = years;

	data[index].height = inches;

}



/** calculates the min of the ages in years

 * @param a array struct

 * @return min age 

 */

int min_age(struct data_t data[])

{

	int i, min;

	min = data[0].age;



	for (i = 0; i < SIZE; i++)

		if (data[i].age < min)

			min = data[i].age;		

	return min;	

}



/** calculates the max of the ages in years

 * @param a array struct

 * @return max age 

 */

int max_age(struct data_t data[])

{

	int i, max;

	max = data[0].age;



	for (i = 1; i < SIZE; i++)

		if (data[i].age > max)

			max = data[i].age;		

	return max;	

}



/** calculates the average of the ages in years

 * @param a array struct

 * @param b age max

 * @param c age min

 * @return average age 

 */

int ave_age(struct data_t data[], int max, int min)

{

	return (max + min) / 2;

}



/** calculates the max of the heights in inches

 * @param a array struct

 * @return min height 

 */

int min_height(struct data_t data[])

{

	int i, h_min;

	h_min = data[0].height;



	for (i = 0; i < SIZE; i++)

		if (data[i].height < h_min)

			h_min = data[i].height;		

	return h_min;	

}



/** calculates the max of the heights in inches

 * @param a array struct

 * @return max height 

 */

int max_height(struct data_t data[])

{

	int i, h_max;

	h_max = data[0].height;



	for (i = 1; i < SIZE; i++)

		if (data[i].height > h_max)

			h_max = data[i].height;		

	return h_max;	

}



/** calculates the average of the heights in inches

 * @param a array struct

 * @param b height max

 * @param c height min

 * @return average height 

 */

int ave_height(struct data_t data[], int h_max, int h_min)

{

	return (h_max + h_min) / 2;

}



/** cprints results of all structs above

 * @param a array struct

 * @param b height max

 * @param c height min

 * @param d height average

 * @param e age max

 * @param f age min

 * @param f age average

 */

void print_struct(struct data_t data[], int h_max, int h_min, int h_ave, int max, int min, int ave)

{

	//return min of ages

	min = min_age(data);

	printf("min of ages: %d\n", min);



	//return max of ages

	max = max_age(data);

	printf("max of ages: %d\n", max);



	//return average of ages

	ave = ave_age(data, max, min);

	printf("average age: %d\n", ave);



	//return min of height

	h_min = min_height(data);

	printf("min of heights: %d\n", h_min);



	//return max of height

	h_max = max_height(data);

	printf("max of heights: %d\n", h_max);



	//return average of height

	h_ave = ave_height(data, h_max, h_min);

	printf("average height: %d\n", h_ave);

}

