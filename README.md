# permuteArray
A solution for the array permutation exercise found in Codility

This function takes an array, e.g. [3,7,8,9,6] and applies a permutation such that all elements are moved K positions down. 
The permutation is cyclic, and elements that reach the end of the array, start from the beginning.
For example, for K=1 the above array becomes [6,3,7,8,9].

The goal of this exercise is to demonstrate the functionality of pointers, more that create an efficient solution.
For the record, this code scores 87%, losing in performance for very large arrays.
On the other hand, it shows how pointers work in practice. The input of the PermuteOnce function is the pointer to vector A. You'll notice that the function is defined as void, i.e. returns nothing. That's because it messes with A as it is, on its location in memory. 
If, for instance, one were to use a configuration of the type

vector<int> permuteOnce(vector<int> A){
 //CODE BLOCK
  
  return A;
  }
  
 a copy of A would've been made. This is inefficient for many applications, where copying large arrays might consume enough time, while we're sure we don't need the original A anymore.
