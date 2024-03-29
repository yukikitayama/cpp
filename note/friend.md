# Friend

A **friend** of a class may be
- A class (Friend class)
- A function (Friend function)

A friend (class or function) can access those components hidden from others. Friends are allowed to access or to use private and protected components of the class.

If there are 2 classes A and B, and if A wants B to be able to access A's private possessions, it has to announce that B is A's friend. One direction.

A friend's friend isn't my friend. Friendship isn't inherited.

```
class Class {
friend class Friend;
...
};

class Friend {

};
```

