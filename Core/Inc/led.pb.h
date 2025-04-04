/* Automatically generated nanopb header */
/* Generated by nanopb-1.0.0-dev */

#ifndef PB_LED_PB_H_INCLUDED
#define PB_LED_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _LedCommand_CommandType {
    LedCommand_CommandType_LED_OFF = 0,
    LedCommand_CommandType_LED_ON = 1
} LedCommand_CommandType;

/* Struct definitions */
typedef struct _LedCommand {
    LedCommand_CommandType command;
} LedCommand;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _LedCommand_CommandType_MIN LedCommand_CommandType_LED_OFF
#define _LedCommand_CommandType_MAX LedCommand_CommandType_LED_ON
#define _LedCommand_CommandType_ARRAYSIZE ((LedCommand_CommandType)(LedCommand_CommandType_LED_ON+1))

#define LedCommand_command_ENUMTYPE LedCommand_CommandType


/* Initializer values for message structs */
#define LedCommand_init_default                  {_LedCommand_CommandType_MIN}
#define LedCommand_init_zero                     {_LedCommand_CommandType_MIN}

/* Field tags (for use in manual encoding/decoding) */
#define LedCommand_command_tag                   1

/* Struct field encoding specification for nanopb */
#define LedCommand_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    command,           1)
#define LedCommand_CALLBACK NULL
#define LedCommand_DEFAULT NULL

extern const pb_msgdesc_t LedCommand_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define LedCommand_fields &LedCommand_msg

/* Maximum encoded size of messages (where known) */
#define LED_PB_H_MAX_SIZE                        LedCommand_size
#define LedCommand_size                          2

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
