
//what is an array??
    // array is a data structure that allows collection of values having  the same data type 
        // data structure - allocation of memories 
    //arrays allow one to store data using only one name, as opposed to having to store data in different variables
        
    //linear data structure= continuous/contiguous memories 



// // variable declaration:
// int X1,X2,X3,X4,X5 = 5 variables of type int 
// X1= 11; X2=10 ,X3=7 ,X4=8,X5=90

// int x[5]= array of 5 integer values 
// array of 5 values of type int
// int=2 byte * 5 =10 allocat e of memories

// x[0]= 4
// x[1]= 7
// x[2]= -3
// x[3]= 5
// x[4]= 6

x= array name
[5]= size of array
[0]= starting index of array
[size-1] =ending index of array

char answer[10]
for(i=0; i<10; i++){
    printf("Answer to %d:", (i+1));
    scanf("|%c", &answer[i]);
}