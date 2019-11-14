#An attempt at greatness

Guess I should add that this relies on the nana opensource library, and also it probably has some dependencies. I'll sort all of that out later.

```
g++ -Wall -L ./nana/build/bin/ -std=c++11 -o bin/helloWorld.x86_64 hW.cpp -I ./include/ -lnana -lX11 -lpthread -lXpm -lrt -ldl -lfreetype -lXft -lfontconfig -lasound -lpng -lstdc++fs
```

## I'll Add more ways to compile later when I'm not tired
