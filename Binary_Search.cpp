void bi_search(std::vector<int> vv, int x)
{
    int mid=vv.size()/2;
    
    if(x==mid)
    {
        std::cout << x << " Is in vv " << vv[mid];
    }

    while(x<mid)
    {
        if(x==mid)
        {
            std::cout << "its here x= " << x << " mid = " << mid << std::endl;
            break;
        }
        --mid;
        
    }
    while(x>=mid)
    {
        if(x==mid)
        {
            std::cout << "its here x= " << x << " mid = " << mid << std::endl;
        }
        ++mid;
    }
}
