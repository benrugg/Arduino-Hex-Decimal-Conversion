
// Converting from Hex to Decimal:

// NOTE: This function can handle a positive hex value from 0 - 65,535 (a four digit hex string).
//       For larger/longer values, change "unsigned int" to "long" in both places.


bool hexToDec(String hexString, unsigned int &decValue) {
    decValue = 0;

    if (hexString.length() == 0 || hexString.length() > 4) {
        return false;
    }

    for (int i = 0; i < hexString.length(); i++) {
        char c = hexString.charAt(i);
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        }
        else {
            decValue = 0;
            return false;
        }

        decValue = decValue * 16 + value;
    }

    return true;
}





// Converting from Decimal to Hex:

// NOTE: This function can handle a positive decimal value from 0 - 255, and it will pad it
//       with 0's (on the left) if it is less than the desired string length.
//       For larger/longer values, change "byte" to "unsigned int" or "long" for the decValue parameter.


String decToHex(byte decValue, byte desiredStringLength) {
  
  String hexString = String(decValue, HEX);
  while (hexString.length() < desiredStringLength) hexString = "0" + hexString;
  
  return hexString;
}