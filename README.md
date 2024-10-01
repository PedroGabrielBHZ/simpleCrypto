# Caesar Cipher

This is a simple C program that implements the Caesar Cipher encryption technique. The program reads input from the standard input (stdin) and outputs the encrypted text to the standard output (stdout).

## Files

- [`caesar.c`](command:_github.copilot.openRelativePath?%5B%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2Fhome%2Fpedro%2Fesiee%2FAIC%2Fcaesar.c%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22b6ed7263-2adc-4b2b-b40a-630fb2a14c56%22%5D "/home/pedro/esiee/AIC/caesar.c"): The main source code file containing the implementation of the Caesar Cipher.

## Usage

To compile the program, use the following command:

```sh
gcc -o caesar caesar.c
```

To run the program, use the following command:

```sh
./caesar <shift>
```

Where `<shift>` is the number of positions each letter in the plaintext is shifted.

### Example

```sh
echo "Hello, World!" | ./caesar 3
```

This will output:

```
Khoor, Zruog!
```

## Functions

### `void caesarCipherASCII(int shift)`

Encrypts the input using a Caesar Cipher with the given shift, treating all characters as ASCII values.

### `void caesarCipherAlphabetical(int shift)`

Encrypts the input using a Caesar Cipher with the given shift, only shifting alphabetical characters and leaving other characters unchanged.

## Notes

- The program expects a single command-line argument which is the shift value.
- If the shift value is not provided, the program will print a usage message and exit.

## License

This project is licensed under the MIT License.