#ifndef PBKDF2_H
#define PBKDF2_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RFC 8018 PBKDF2 using HMAC-SHA2 family.
 * - password/salt may be NULL if corresponding length is zero.
 * - iterations >= 1, out_len >= 1.
 * - out must point to a writable buffer of out_len bytes.
 */

void pbkdf2_hmac_sha224(const uint8_t *password, size_t password_len,
                        const uint8_t *salt,     size_t salt_len,
                        uint32_t iterations,
                        uint8_t *out, size_t out_len);

void pbkdf2_hmac_sha256(const uint8_t *password, size_t password_len,
                        const uint8_t *salt,     size_t salt_len,
                        uint32_t iterations,
                        uint8_t *out, size_t out_len);

void pbkdf2_hmac_sha384(const uint8_t *password, size_t password_len,
                        const uint8_t *salt,     size_t salt_len,
                        uint32_t iterations,
                        uint8_t *out, size_t out_len);

void pbkdf2_hmac_sha512(const uint8_t *password, size_t password_len,
                        const uint8_t *salt,     size_t salt_len,
                        uint32_t iterations,
                        uint8_t *out, size_t out_len);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* PBKDF2_H */
