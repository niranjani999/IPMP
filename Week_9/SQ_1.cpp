//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    if(top1>0){
        top1--;
        arr[top1] = x;
    }
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top2 < size -1){
        top2++;
        arr[top2] = x;
    }

}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1<=  size/2) {
        int ele = arr[top1];
        top1++;
        return ele;
    }
    else return -1;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2 >= size/2 +1){
        int ele = arr[top2];
        top2--;
        return ele;
    }
    else return -1;
}
