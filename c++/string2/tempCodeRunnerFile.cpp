for (int k = i + 1; k < s.length(); k++) {
                if (s[k] == ch) {
                    s[k] = '\0'; // nullify further occurrences
                }
            }