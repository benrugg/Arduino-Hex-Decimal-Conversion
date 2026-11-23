Arduino-Hex-Decimal-Conversion
==============================

Utility functions for converting values between hex strings and decimal numbers on Arduino. (Helpful for color conversion).

Licensed for any use under the MIT License.

## Hexadecimal Input Validation

The hexToDec() function validates hexadecimal input before conversion.

It accepts:
- Digits 0-9
- Uppercase letters A-F
- Lowercase letters a-f
- Maximum four hexadecimal digits

Invalid characters, empty strings, and inputs longer than four digits are rejected.

## Test Cases

### 1. Hexadecimal to Decimal

| Input | Expected Result |
|---|---|
| "A" | 10 |
| "FF" | 255 |
| "10" | 16 |
| "ffff" | 65535 |
| "G" | Invalid input |
| "12XZ" | Invalid input |
| "12@" | Invalid input |
| "" | Invalid input |
| "10000" | Invalid input |

### 2. Decimal to Hexadecimal

| Decimal Input | Length | Expected Output |
|---|---|---|
| 0 | 2 | "00" |
| 10 | 2 | "0a" |
| 15 | 2 | "0f" |
| 100 | 2 | "64" |
| 255 | 2 | "ff" |
| 255 | 4 | "00ff" |

## Example Usage

```cpp
unsigned int result;

if (hexToDec("FF", result)) {
    Serial.println(result);
} else {
    Serial.println("Invalid hexadecimal input");
}
```
