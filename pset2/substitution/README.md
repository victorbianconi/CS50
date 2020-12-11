<h1>Substitution</h1>
<h2>Implement a program that implements a substitution cipher, per the below.</h2>

*$ ./substitution JTREKYAVOGDXPSNCUIZLFBMWHQ* <br>
<b>plaintext:</b>  HELLO <br>
<b>ciphertext:</b> VKXXN <br>
<br>
<h3>Background</h3>
In a substitution cipher, we “encrypt” (i.e., conceal in a reversible way) a message by replacing every letter with another letter. To do so, we use a key: in this case, a mapping of each of the letters of the alphabet to the letter it should correspond to when we encrypt it. To “decrypt” the message, the receiver of the message would need to know the key, so that they can reverse the process: translating the encrypt text (generally called ciphertext) back into the original message (generally called plaintext).

<br>A key, for example, might be the string NQXPOMAFTRHLZGECYJIUWSKDVB. This 26-character key means that A (the first letter of the alphabet) should be converted into N (the first character of the key), B (the second letter of the alphabet) should be converted into Q (the second character of the key), and so forth.

A message like HELLO, then, would be encrypted as FOLLE, replacing each of the letters according to the mapping determined by the key.

Let’s write a program called substitution that enables you to encrypt messages using a substitution cipher. At the time the user executes the program, they should decide, by providing a command-line argument, on what the key should be in the secret message they’ll provide at runtime.

Here are a few examples of how the program might work. For example, if the user inputs a key of YTNSHKVEFXRBAUQZCLWDMIPGJO and a plaintext of HELLO:

*$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO* <br>
<b>plaintext:</b>  HELLO <br>
<b>ciphertext:</b> EHBBQ <br>
<br>
Here’s how the program might work if the user provides a key of VCHPRZGJNTLSKFBDQWAXEUYMOI and a plaintext of hello, world:<br>
<br>
*$ ./substitution VCHPRZGJNTLSKFBDQWAXEUYMOI* <br>
<b>plaintext:</b>  hello, world <br>
<b>ciphertext:</b> jrssb, ybwsp <br><br>
Notice that neither the comma nor the space were substituted by the cipher. Only substitute alphabetical characters! Notice, too, that the case of the original message has been preserved. Lowercase letters remain lowercase, and uppercase letters remain uppercase.
<br>

<h3>Specification</h3>
Design and implement a program, substitution, that encrypts messages using a substitution cipher.
