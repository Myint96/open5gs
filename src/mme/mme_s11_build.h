#ifndef __MME_S11_BUILD_H__
#define __MME_S11_BUILD_H__

#include "gtp_tlv.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

CORE_DECLARE(status_t) mme_s11_build_create_session_request(
                        pkbuf_t **pkbuf, mme_bearer_t *bearer);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MME_S11_BUILD_H__ */
