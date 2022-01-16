void lin_search(const std::vector<int> vec, int x)
{
    for(auto i=vec.begin(); i!=vec.end(); ++i)
    {
        if(*i==x)
        {
            std::cout << "Yes " << *i << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }
    }
}
