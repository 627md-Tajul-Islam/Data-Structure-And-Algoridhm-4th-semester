LA = Linear Array 
N = number of elements
K = Positive Integer 

1/ Initialize [Set J = N]

2/ Repeat steps 3 and 4 while J >= K 

3/ set LA[J+1] = LA[J]

4/ Set J = J - 1

5/ set LA[K] = ITEM 

6/ Set N = N + 1

7/ Exit 

Algorithm

1. Get the element value which needs to be inserted.

2. Get the position value.

3. Check whether the position value is valid or not.

4. If it is valid,

     Shift all the elements from the last index to position index by 1 position to the right.

     insert the new element in arr[position]

5. Otherwise,

     Invalid Position