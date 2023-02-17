# 0x01. C - Variables, if, else, while

## Resources
* [The C Book](https://publications.gbdirect.co.uk/c_book/)
* [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)

---
## Notes
### Keywords and Identifiers
#### Keywords
C keeps a small set of keywords for its own use. These keywords cannot be used as identifiers in the program. Here is the list of keywords used in Standard C; you will notice that none of them use upper-case letters.

| auto     | double | int      | struct   |
|----------|--------|----------|----------|
| break    | else   | long     | switch   |
| case     | enum   | register | typedef  |
| char     | extern | return   | union    |
| const    | float  | short    | unsigned |
| continue | for    | signed   | void     |
| default  | goto   | sizeof   | volatile |
| do       | if     | static   | while    |

#### Identifiers

Identifier is the fancy term used to mean ‘name’.The rules for the construction of identifiers are simple: you may use the 52 upper and lower case alphabetic characters, the 10 digits and finally the underscore ‘_’, which is considered to be an alphabetic character for this purpose. The only restriction is the usual one; identifiers must start with an alphabetic character.

The new limit on length of identifiers is 31 characters—although identifiers may be longer, they must differ in the first 31 characters if you want to be sure that your programs are portable. 

External identifiers are the ones that have to be visible outside the current source code file. Typical examples of these would be library routines or functions which have to be called from several different source files.

External identifiers should differ from each other in the first six characters. Worse than that, upper and lower case letters in external identifiers  may be treated the same!
