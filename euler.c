//Euler Problem #1
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.*/

double sum_of_multiple(){
	double sum = 0;
	int addend;

	for(addend=3; addend < 1000; addend++){
		if(addend%3==0 || addend%5==0){
			sum+=addend;
		}
	}
	return sum;
}



//Euler Problem #6
/*Find the difference between the sum of the squares of the first one hundred natural
numbers and the square of the sum. */

double difference_of_square(){
	double sum_of_square;
	double square_of_sum;

	int addend;
	for(addend=1; addend <= 100; addend++){
		sum_of_square+= addend*addend;
		square_of_sum+=addend;
	}

	return (square_of_sum * square_of_sum) - sum_of_square;

}
