#include <stdio.h>

void	ft_swap(int *a, int *b){

	int tmp;

	/*a nın pointer degerini tmp degişkenine atadık*/
	/*b nin pointer degerini a degişkenine attık*/
	/*tmp degişkenin degerini b degişkenine atadık*/
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int 	 main (){
		
	int x;
	int y;

	/*x degeri 2 y degeri 3. x ve y degerlerini ekrana yazdırdık */
	x = 2;
	y= 3;
	ft_swap( &x, &y);
	printf("%d  \n", x);
	printf("%d", y);

	}


