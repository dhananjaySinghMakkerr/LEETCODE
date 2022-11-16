/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long int l=1;
        long long int h=n;
        long long int g;
        while(l<=h)
        {
            g=(l+h)/2;
            if(!guess(g))
                return g;
            else if(guess(g)==1)
                 l=g+1;
            else
               h=g-1;
        }
        return 0;
    }
};