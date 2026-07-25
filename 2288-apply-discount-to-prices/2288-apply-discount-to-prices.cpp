class Solution {
public:
    string discountPrices(string sentence, int discount) 
    {
        stringstream ss(sentence);
        string word;
        vector<string> ans;
        while (ss>>word)
        {
            bool ok = true;
            if (word.size()==1 || word[0]!='$') ok = false;
            for (int i =1;i<word.size();i++)
            {
                if (!isdigit(word[i]))
                ok = false;
            }
            if(ok) 
            {
                string num = word.substr(1);
                double price = stod(num);
                price = price*(100 - discount)/100;
                stringstream temp;
                temp << fixed << setprecision(2) << price;
                word = "$" + temp.str();
                ans.push_back(word);
            }
            else ans.push_back(word);
        }
        string res = "";
        for (int i=0;i<ans.size();i++)
        {
            if(!res.empty()) res+= " ";
            res+=ans[i];
        }
        return res;
    }
};