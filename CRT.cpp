//#include<stdio.h>
//int sumofarr(int a[])
//{
//	int sum=0;
//	int size =sizeof(a)/sizeof(a[0]);
//	for (int i=0;i<size;i++){
//	sum+=a[i];
//}
//	return sum;
//}
//int main()
//{
//	int arr[]={10,20,30,40,50,60,70,80,90};
//	int total=sumofarr(arr);
//	printf("%d",total);
//	return 0;
//}

//*First Half Sorting*

//#include<stdio.h>
//int main(){	
//	int n,temp=0,arr[100];
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0,j=n/2-1;i<n/4;i++,j++){
//		temp=arr[i];
//		arr[i]=arr[j];
//		arr[j]=temp;
//	}
//for(int i=0;i<n;i++){
//			printf("%d ",arr[i]);
//}
//	return 0;
//}

//*Step Rotation*
//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int n,temp;
//	printf("Enter the size of the array:");
//	scanf("%d",&n);
//	printf("Enter the elements of the array:");
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	temp=arr[0];
//	for(int i=0;i<=n-1;i++)
//	{
//		arr[i]=arr[i+1];
//	}
//	arr[n-1]=temp;
//	for(int i=0;i<n;i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//}

//*Last Element comes to first*
//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int n,temp;
//	printf("Enter the size of the array:");
//	scanf("%d",&n);
//	printf("Enter the elements of the array:");
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	temp=arr[n-1];
//	for(int i=n-1;i>=0;i--)
//	{
//		arr[i]=arr[i-1];
//	}
//	arr[0]=temp;
//	for(int i=0;i<n;i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//}

//**Kth element**
//#include<stdio.h>
//int main()
//{
//	int arr[100];
//	int n,temp,k;
//	printf("Enter the size of the array:");
//	scanf("%d",&n);
//	printf("Enter the elements of the array:");
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&k);
//	for(int j=0;j<k;j++)
//	{
//		
//	temp=arr[0];
//	for(int i=0;i<=n-1;i++)
//	{
//		arr[i]=arr[i+1];
//	}
//	arr[n-1]=temp;
//	for(int i=0;i<n;i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//	printf("\n");
//}
//
//return 0;
//}

//*CodeForces---136A---Presents*

//#include<stdio.h>
//int main()
//{
//	int n,k;
//	scanf("%d",&n);
//	int arr[n+1];
//	for(int i=1;i<=n;i++)
//	{
//		scanf("%d",&k);
//		arr[k]=i;
//	}
//	for(int i=1;i<=n;i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//	return 0;
//	
//}

//Find the sum of even elements in an array 
//#include<stdio.h>
//int fun(int a[],int size) {
//    int sum = 0;
//    for(int i = 0; i < size; i++) {
//        if(a[i] % 2 == 0)
//            sum += a[i];
//    }
//    return sum;
//}
//int main() {
//    int arr[100], n;
//    printf("Enter the size of the array: ");
//    scanf("%d", &n);
//    printf("Enter the elements of array: ");
//    for(int i=0;i<n;i++) 
//	{
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n",fun(arr, n));
//    return 0;
//}

//sum of float numbers
//#include <stdio.h>
//#include <math.h>
//
//float fun(float a[], int size) {
//    float sum = 0;
//    for (int i = 0; i < size; i++) {
//        if (ceil(a[i]) != a[i]) {
//            sum += a[i];
//        }
//    }
//    return sum;
//}
//
//int main() {
//    float arr[100];
//    int n;
//    printf("Enter the size of array: ");
//    scanf("%d", &n);
//    printf("Enter the elements in array: ");
//    for (int i = 0; i < n; i++) {
//        scanf("%f", &arr[i]);
//    }
//
//    float result = fun(arr, n);
//    printf("Sum of non-integer elements: %.2f\n", result);
//    return 0;
//}

//**Left Sum**
//#include<stdio.h>
//int fun(int a[],int size)
//{
//    int sum = 0;
//    for(int i=0;i<size;i++) 
//	{
//       
//	   sum+=a[i];
//	   printf("%d\t",sum);
//    }
//    return sum;
//}
//int main()
//{
//    int arr[100], n;
//    printf("Enter the size of the array: ");
//    scanf("%d", &n);
//    printf("Enter the elements of array: ");
//    for(int i=0;i<n;i++) 
//	{
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n",fun(arr, n));
//    return 0;
//}

//*Right Sum**
//#include<stdio.h>
//int fun(int a[],int size)
//{
//    int sum = 0;
//    for(int i=size-1;i>=0;i--) 
//	{
//       
//	   sum+=a[i];
//	   a[i]=sum;
//	   
//    }
//    for(int i=0;i<size;i++)
//    {
//    	printf("%d\t",a[i]);
//	}
//    return 0;
//}
//int main()
//{
//    int arr[100], n;
//    printf("Enter the size of the array: ");
//    scanf("%d", &n);
//    printf("Enter the elements of array: ");
//    for(int i=0;i<n;i++) 
//	{
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n",fun(arr, n));
//    return 0;
//}

//**Not Divisible by 3 and should not end by 3 and also negative numbers should be there**
//#include<stdio.h>
//int fun(int a[],int size)
//{
//    int sum = 0;
//    for(int i=size-1;i>=0;i--) 
//	{
//       
//	   sum+=a[i];
//	   a[i]=sum;
//	   
//    }
//    for(int i=0;i<size;i++)
//    {
//    	if(a[i]%3!=0 && a[i])
//    	printf("%d\t",a[i]);
//	}
//    return 0;
//}
//int main()
//{
//    int arr[100], n;
//    printf("Enter the size of the array: ");
//    scanf("%d", &n);
//    printf("Enter the elements of array: ");
//    for(int i=0;i<n;i++) 
//	{
//        scanf("%d", &arr[i]);
//    }
//    printf("%d\n",fun(arr, n));
//    return 0;
//}

//Date:15/07/2024
//**Increment and Decrement Pointers**
//#include<stdio.h>
//int main()
//{
//	int a[]={6,2,8,4,9}, *p,n;
//	p=a+2;
//	n=*p;
//	printf("\nOutput: %d",n);
//	n=*++p;
//	printf("\nOutput: %d",n);
//	n=*(--p);
//	printf("\nOutput: %d",n);
//	n=*p--;
//	printf("\nOutput: %d",n);
//	n=(*p)++;
//	printf("\nOutput: %d",n);
//	n=++(*p);
//	printf("\nOutput: %d",n);
//	n=--*p;
//	printf("\nOutput: %d",n);
//	n=*(++p);
//	printf("\nOutput: %d",n);
//	return 0;
//}


//**Function Pointer**
//#include<stdio.h>
//int add(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	int k;
//	int (*p)(int,int);
//	p=&add;
//	k=(*p)(2,3);
//	printf("%d",k);
//}


//#include<stdio.h>
//int add(int a,int b)
//{
//	return a+b;
//}
//int main()
//{
//	int k;
//	int (*p)(int,int)=&add;
//	k=p(2,3);
//	printf("%d",k);
//}


////**Stack**
//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX 5  // Define the maximum size of the stack
//
//int stack[MAX];  // Array to store stack elements
//int top = -1;    // Variable to keep track of the top element
//
//// Function to check if the stack is empty
//int isEmpty() {
//    return top == -1;
//}
//
//// Function to check if the stack is full
//int isFull() {
//    return top == MAX - 1;
//}
//
//// Function to push an element onto the stack
//void push(int value) {
//    if (isFull()) {
//        printf("Stack overflow\n");
//    } else {
//        stack[++top] = value;
//    }
//}
//
//// Function to pop an element from the stack
//int pop() {
//    if (isEmpty()) {
//        printf("Stack underflow\n");
//        return -1;  // Return -1 to indicate an error
//    } else {
//        return stack[top--];
//    }
//}
//
//// Function to peek at the top element of the stack
//int peek() {
//    if (isEmpty()) {
//        printf("Stack is empty\n");
//        return -1;  // Return -1 to indicate an error
//    } else {
//        return stack[top];
//    }
//}
//
//// Main function to demonstrate stack operations
//int main() {
//    push(10);
//    push(20);
//    push(30);
//
//    printf("Top element is %d\n", peek());
//    printf("Popped element is %d\n", pop());
//    printf("Top element is %d\n", peek());
//
//    return 0;
//}
