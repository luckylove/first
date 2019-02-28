#include<bits/stdc++.h>
using namespace std;
// i can add or append to it accordinlgy for it to say and to all what to say next
// about this things to me and to all what to say next about this ok for me and to all

// not the character array but comparing the stirng
// accordingly for it
// so compare is used much more efficiently as compared to the
// rational operator as far as we are talking about the strings

// that is comparing two string accordingly for it
// what to say next about this ok for me and to all what to say something something
// regarding all these things to me and toall
// not comparing the char arrays
// just comparing the strings accordinlgy for it
// we need to do certain things to me and to all
string multiply(string num1, string num2)
{
	int n1 = num1.size();
	int n2 = num2.size();
	if (n1 == 0 || n2 == 0)
	return "0";
	vector<int> result(n1 + n2, 0);
	int i_n1 = 0;
	int i_n2 = 0;
	for (int me=n1-1; me>=0; me--)
	{
		int carry = 0;
		int n1 = num1[me] - '0';
		i_n2 = 0;
		for (int j=n2-1; j>=0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1*n2 + result[i_n1 + i_n2] + carry;
			carry = sum/10;
			result[i_n1 + i_n2] = sum % 10;

			i_n2++;
		}


		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}

	int me = result.size() - 1;
	while (me>=0 && result[me] == 0)
	me--;
	if (me == -1)
	return "0";

	string s = "";
	while (me >= 0)
		s += std::to_string(result[me--]);

	return s;
}
int main()
{
   int test,i,j,k,l,c,countt,temp,store,sum,p,s,a,b,m,n;
   char arr[100003];
   char brr[100003];
   cin>>test;
   while(test--)
   {
      cin>>arr>>brr;
      n=strlen(arr);
      m=strlen(brr);
      a=0;
      for(i=0;i<n;i++)
      {
          if(arr[i]=='1')
          {
            a++;
          }
      }
      b=0;
      for(i=0;i<m;i++)
      {
          if(brr[i]=='1')
          {
            b++;
          }
      }

          string some;
          string someother;
          i=0;
         while(a--)
         {
             //cout<<"ss"<<endl;
             some.append("1");
             i++;
         }
         j=0;
         while(b--)
         {
            // cout<<"gg"<<endl;
             someother.append("1");
             j++;
         }
        // cout<<"some is "<<some<<endl;
        // cout<<"someother is "<<someother<<endl;
         cout<<multiply(some,someother)<<endl;






   }
}
