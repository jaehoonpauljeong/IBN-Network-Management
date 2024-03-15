/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_H_
#define	_ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_MeasAndMobParametersMRDC-FRX-Diff.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ASN_RRC_UE-MRDC-CapabilityAddFRX-Mode */
typedef struct ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode {
	ASN_RRC_MeasAndMobParametersMRDC_FRX_Diff_t	 measAndMobParametersMRDC_FRX_Diff;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UE_MRDC_CapabilityAddFRX_Mode_H_ */
#include <asn_internal.h>
