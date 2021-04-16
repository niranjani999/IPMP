long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  int num1 = 0, num2 = 0;
  while (l1 || l2)
  {
      if (l1)
      {
          num1 = num1*10 + l1->data;
          l1 = l1->next;
      }
      if (l2)
      {
          num2 = num2*10 + l2->data;
          l2 = l2->next;
      }
  }
  int ans = num1*num2;
  return ans;
}
