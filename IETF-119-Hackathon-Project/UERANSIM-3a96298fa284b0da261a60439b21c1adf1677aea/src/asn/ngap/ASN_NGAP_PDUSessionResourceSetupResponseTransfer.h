/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_PDUSessionResourceSetupResponseTransfer_H_
#define	_ASN_NGAP_PDUSessionResourceSetupResponseTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_QosFlowPerTNLInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_QosFlowPerTNLInformationList;
struct ASN_NGAP_SecurityResult;
struct ASN_NGAP_QosFlowListWithCause;
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_PDUSessionResourceSetupResponseTransfer */
typedef struct ASN_NGAP_PDUSessionResourceSetupResponseTransfer {
	ASN_NGAP_QosFlowPerTNLInformation_t	 dLQosFlowPerTNLInformation;
	struct ASN_NGAP_QosFlowPerTNLInformationList	*additionalDLQosFlowPerTNLInformation;	/* OPTIONAL */
	struct ASN_NGAP_SecurityResult	*securityResult;	/* OPTIONAL */
	struct ASN_NGAP_QosFlowListWithCause	*qosFlowFailedToSetupList;	/* OPTIONAL */
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_PDUSessionResourceSetupResponseTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_PDUSessionResourceSetupResponseTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_PDUSessionResourceSetupResponseTransfer_H_ */
#include <asn_internal.h>
