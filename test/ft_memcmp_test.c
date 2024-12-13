/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkruszyn <kkruszyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:17:35 by kkruszyn          #+#    #+#             */
/*   Updated: 2024/12/13 14:17:59 by kkruszyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() {
    // Test 1: Porównanie dwóch identycznych bloków pamięci
    unsigned char block1[] = { 1, 2, 3, 4, 5 };
    unsigned char block2[] = { 1, 2, 3, 4, 5 };
    int result = ft_memcmp(block1, block2, 5);  // Porównanie 5 bajtów
    printf("Test 1 - Identical blocks: %d\n", result);  // Oczekiwany wynik: 0

    // Test 2: Porównanie bloków pamięci z różnymi danymi
    unsigned char block3[] = { 1, 2, 3, 4, 5 };
    unsigned char block4[] = { 1, 2, 3, 4, 6 };  // Ostatni bajt różny
    result = ft_memcmp(block3, block4, 5);
    printf("Test 2 - Different blocks: %d\n", result);  // Oczekiwany wynik: < 0 (ponieważ 5 < 6)

    // Test 3: Porównanie bloków pamięci o różnych długościach
    unsigned char block5[] = { 1, 2, 3 };
    unsigned char block6[] = { 1, 2, 3, 4, 5 };
    result = ft_memcmp(block5, block6, 3);  // Porównanie 3 pierwszych bajtów
    printf("Test 3 - Different length blocks: %d\n", result);  // Oczekiwany wynik: 0 (pierwsze 3 bajty są identyczne)

    // Test 4: Porównanie bloków pamięci z różnymi danymi i różną długością porównania
    unsigned char block7[] = { 10, 20, 30, 40, 50 };
    unsigned char block8[] = { 10, 20, 30, 60, 50 };
    result = ft_memcmp(block7, block8, 4);  // Porównanie pierwszych 4 bajtów
    printf("Test 4 - Compare first 4 bytes: %d\n", result);  // Oczekiwany wynik: 0 (ponieważ różnica jest w 4 bajcie)

    // Test 5: Porównanie bloków pamięci, gdzie jeden blok ma wartość null na końcu
    unsigned char block9[] = { 1, 2, 3, 4, 5, 0 };
    unsigned char block10[] = { 1, 2, 3, 4, 5 };
    result = ft_memcmp(block9, block10, 6);  // Porównanie 6 bajtów (w tym null na końcu)
    printf("Test 5 - Null-terminated block: %d\n", result);  // Oczekiwany wynik: 0 (bo null kończy oba bloki na tym samym miejscu)

    // Test 6: Porównanie różnych bloków pamięci o różnych długościach
    unsigned char block11[] = { 100, 200, 150 };
    unsigned char block12[] = { 100, 199, 150 };
    result = ft_memcmp(block11, block12, 3);  // Porównanie 3 bajtów
    printf("Test 6 - Different values in blocks: %d\n", result);  // Oczekiwany wynik: > 0 (bo 200 > 199)


    // Test 1: Porównanie dwóch identycznych bloków pamięci
    int result1 = memcmp(block1, block2, 5);  // Porównanie 5 bajtów
    printf("Test 1 - Identical blocks: %d\n", result1);  // Oczekiwany wynik: 0

    // Test 2: Porównanie bloków pamięci z różnymi danymi
    result1 = memcmp(block3, block4, 5);
    printf("Test 2 - Different blocks: %d\n", result1);  // Oczekiwany wynik: < 0 (ponieważ 5 < 6)

    // Test 3: Porównanie bloków pamięci o różnych długościach
    result1 = memcmp(block5, block6, 3);  // Porównanie 3 pierwszych bajtów
    printf("Test 3 - Different length blocks: %d\n", result1);  // Oczekiwany wynik: 0 (pierwsze 3 bajty są identyczne)

    // Test 4: Porównanie bloków pamięci z różnymi danymi i różną długością porównania
    result1 = memcmp(block7, block8, 4);  // Porównanie pierwszych 4 bajtów
    printf("Test 4 - Compare first 4 bytes: %d\n", result1);  // Oczekiwany wynik: 0 (ponieważ różnica jest w 4 bajcie)

    // Test 5: Porównanie bloków pamięci, gdzie jeden blok ma wartość null na końcu
    result1 = memcmp(block9, block10, 6);  // Porównanie 6 bajtów (w tym null na końcu)
    printf("Test 5 - Null-terminated block: %d\n", result1);  // Oczekiwany wynik: 0 (bo null kończy oba bloki na tym samym miejscu)

    // Test 6: Porównanie różnych bloków pamięci o różnych długościach
    result1 = memcmp(block11, block12, 3);  // Porównanie 3 bajtów
    printf("Test 6 - Different values in blocks: %d\n", result1);  // Oczekiwany wynik: > 0 (bo 200 > 199)

    return 0;
}
