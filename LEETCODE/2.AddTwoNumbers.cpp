 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			
			vector<int>v;
			vector<int>v1;
			for(;l1 != NULL;)
			{
				v.push_back(l1 -> val);
				l1 = l1 -> next;
			}
			for(;l2 != NULL;)
			{
				v1.push_back(l2 -> val);
				l2 = l2 -> next;
			}
			vector<int>result, swap1, swap2;
			int i,j, t, s, m;
		if(v1.size() > v.size())
		{
			v1.swap(v);
		}
		//	cout<<i<<" "<<j;
			int carry = 0;
			int sizeV = 0;

			int a,b,sum,temp;

			for(int i = 0,j=0;i<v.size()|| j< v1.size(); i++,j++)
			{
					 a = v[i];
					 if(j >= v1.size())
					 {
								b = 0;
					 }
					 else
					 {
						 b = v1[j];
					 }

					 cout<<a<<" "<<b<<" "<<carry<<" ";
					 sum = a + b+carry;
						if(sum >= 10)
						{
							carry = 1;
							temp = sum - 10;
							result.push_back(temp);		
							//continue;
						}
						else
						{
								result.push_back(sum);
									carry = 0;
						}	
						cout<<result.back()<<"<-->";
			}
		ListNode *k = new ListNode(0);
		ListNode *f = k;
		
		if(carry)
		{
			int sum = 	result[result.size() - 1] + carry; 
			if(sum >= 10 && v1.size() != v.size())
			{
				temp = sum - 10;
				result.push_back(temp);
				result.push_back(temp/10);
			}
			else
			{
				if(v1.size() == v.size())
				result.push_back(carry);
				else
					result.push_back(sum);
			}
			
		}
			

			for(auto e: result)
			{
				ListNode * h = new ListNode();
				h -> val = e;
				h -> next = NULL;
				k -> next = h;
				k = k -> next;
			}
	
			f = f-> next;


		// while(f != NULL)
		// {
		// 	cout<<f -> val;
		// 	f = f-> next;
		// }
		// for(auto e: result)
		// cout<<e<<" ";
		return f;
    }
};