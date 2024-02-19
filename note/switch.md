# Switch

## How it works

1. The value of the expression enclosed inside the parenthesis after the `switch` keyword is evaluated
2. The block which is equal to the value of the expression is searched by `case` keyword
3. When this case is found, the instructions behind the colon are executed. If there's `break` among them, the `switch` execution is terminated
4. **Otherwise, all instructions in other cases below this case are executed until the end of the block is reached or `break` is met**.

Below, when `a << a` is `8`, `case 8:` is executed, but this block doesn't have `break`, so `case 4:` is also executed. And `case 2:` is also executed, but it meets `break`, so the `switch` will terminate. `case 1:` isn't executed.

```
switch(a << a) {
    case 8: cout << a++ << endl;
    case 4: cout << a++ << endl;;
    case 2: break;
    case 1: a--;
}
```

`default:` is a keyword replacing `case something:` and it covers all the events which haven't been enumerated in the previous cases.

**Forgetting to use `break` is one of the most common mistakes developers make**.
