    int i,j,k;
    int store=source.lenght();
    source=source+source;
    // we appended two strings
    int len1 = source.length();
    int len2 = target.length();
    if (len1 < len2)
    {
       return -1;
    }
    int hasht[256] = {0};
    int hashs[256] = {0};


    for ( i = 0; i < len2; i++)
        hasht[target[i]]++;

    int start = 0, start_index = -1, min_len = 10000000;
    int countt = 0;
    for (j = 0; j < len1 ; j++)
    {

        hashs[source[j]]++;

        if (hasht[source[j]] != 0 &&
            hashs[source[j]] <= hasht[source[j]] )
            countt++;

        if (countt == len2)
        {

            while ( hashs[source[start]] > hasht[source[start]]
                || hasht[source[start]] == 0)
            {

                if (hashs[source[start]] > hasht[source[start]])
                    hashs[source[start]]--;
                start++;
            }
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    len=min_index;
    if(start_index==-1)
    {
        return -1;
    }
    else if(len<=store)
    {
        return len;
    }
    else
    {
        return -1;
    }

