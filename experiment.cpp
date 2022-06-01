class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		string common = "";
		int count = 1;
		while (count <= strs[0].length())
		{
			string current = strs[0].substr(0, count);

			int j = 1;
			while (j < strs.size())
			{
				if (strs[j].find(current) != 0)
				{
					break;
				}
				j++;
			}

			if (j == strs.size())
			{
				common = current;
			}
			else
			{
				break;
			}
			count++;
		}

		return common;
	}
};