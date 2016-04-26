// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "xml2_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// read_connection_
RawVector read_connection_(RObject con, int chunk_size);
RcppExport SEXP xml2_read_connection_(SEXP conSEXP, SEXP chunk_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< int >::type chunk_size(chunk_sizeSEXP);
    __result = Rcpp::wrap(read_connection_(con, chunk_size));
    return __result;
END_RCPP
}
// doc_parse_file
XPtrDoc doc_parse_file(std::string path, std::string encoding, bool as_html);
RcppExport SEXP xml2_doc_parse_file(SEXP pathSEXP, SEXP encodingSEXP, SEXP as_htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< bool >::type as_html(as_htmlSEXP);
    __result = Rcpp::wrap(doc_parse_file(path, encoding, as_html));
    return __result;
END_RCPP
}
// doc_parse_raw
XPtrDoc doc_parse_raw(RawVector x, std::string encoding, std::string base_url, bool as_html);
RcppExport SEXP xml2_doc_parse_raw(SEXP xSEXP, SEXP encodingSEXP, SEXP base_urlSEXP, SEXP as_htmlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< RawVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type encoding(encodingSEXP);
    Rcpp::traits::input_parameter< std::string >::type base_url(base_urlSEXP);
    Rcpp::traits::input_parameter< bool >::type as_html(as_htmlSEXP);
    __result = Rcpp::wrap(doc_parse_raw(x, encoding, base_url, as_html));
    return __result;
END_RCPP
}
// doc_format
CharacterVector doc_format(XPtrDoc x);
RcppExport SEXP xml2_doc_format(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_format(x));
    return __result;
END_RCPP
}
// doc_write
void doc_write(XPtrDoc x, std::string path);
RcppExport SEXP xml2_doc_write(SEXP xSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    doc_write(x, path);
    return R_NilValue;
END_RCPP
}
// doc_root
XPtrNode doc_root(XPtrDoc x);
RcppExport SEXP xml2_doc_root(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_root(x));
    return __result;
END_RCPP
}
// doc_url
CharacterVector doc_url(XPtrDoc x);
RcppExport SEXP xml2_doc_url(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type x(xSEXP);
    __result = Rcpp::wrap(doc_url(x));
    return __result;
END_RCPP
}
// doc_new
XPtrDoc doc_new(std::string version);
RcppExport SEXP xml2_doc_new(SEXP versionSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type version(versionSEXP);
    __result = Rcpp::wrap(doc_new(version));
    return __result;
END_RCPP
}
// doc_set_root
XPtrNode doc_set_root(XPtrDoc doc, XPtrNode root);
RcppExport SEXP xml2_doc_set_root(SEXP docSEXP, SEXP rootSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type root(rootSEXP);
    __result = Rcpp::wrap(doc_set_root(doc, root));
    return __result;
END_RCPP
}
// libxml2_version
std::string libxml2_version();
RcppExport SEXP xml2_libxml2_version() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(libxml2_version());
    return __result;
END_RCPP
}
// unique_ns
CharacterVector unique_ns(CharacterVector ns);
RcppExport SEXP xml2_unique_ns(SEXP nsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type ns(nsSEXP);
    __result = Rcpp::wrap(unique_ns(ns));
    return __result;
END_RCPP
}
// doc_namespaces
CharacterVector doc_namespaces(XPtrDoc doc);
RcppExport SEXP xml2_doc_namespaces(SEXP docSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    __result = Rcpp::wrap(doc_namespaces(doc));
    return __result;
END_RCPP
}
// node_name
CharacterVector node_name(XPtrNode node, CharacterVector nsMap);
RcppExport SEXP xml2_node_name(SEXP nodeSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_name(node, nsMap));
    return __result;
END_RCPP
}
// node_text
CharacterVector node_text(XPtrNode node, bool trim);
RcppExport SEXP xml2_node_text(SEXP nodeSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    __result = Rcpp::wrap(node_text(node, trim));
    return __result;
END_RCPP
}
// node_attr
SEXP node_attr(XPtrNode node, std::string name, CharacterVector missing, CharacterVector nsMap);
RcppExport SEXP xml2_node_attr(SEXP nodeSEXP, SEXP nameSEXP, SEXP missingSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type missing(missingSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_attr(node, name, missing, nsMap));
    return __result;
END_RCPP
}
// node_set_attr
void node_set_attr(XPtrNode node, std::string name, std::string value, CharacterVector nsMap);
RcppExport SEXP xml2_node_set_attr(SEXP nodeSEXP, SEXP nameSEXP, SEXP valueSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    node_set_attr(node, name, value, nsMap);
    return R_NilValue;
END_RCPP
}
// node_remove_attr
void node_remove_attr(XPtrNode node, std::string name, CharacterVector nsMap);
RcppExport SEXP xml2_node_remove_attr(SEXP nodeSEXP, SEXP nameSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    node_remove_attr(node, name, nsMap);
    return R_NilValue;
END_RCPP
}
// node_attrs
CharacterVector node_attrs(XPtrNode node, CharacterVector nsMap);
RcppExport SEXP xml2_node_attrs(SEXP nodeSEXP, SEXP nsMapSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    __result = Rcpp::wrap(node_attrs(node, nsMap));
    return __result;
END_RCPP
}
// node_format
CharacterVector node_format(XPtrDoc doc, XPtrNode node, bool format, int indent);
RcppExport SEXP xml2_node_format(SEXP docSEXP, SEXP nodeSEXP, SEXP formatSEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    __result = Rcpp::wrap(node_format(doc, node, format, indent));
    return __result;
END_RCPP
}
// node_children
Rcpp::List node_children(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_children(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    __result = Rcpp::wrap(node_children(node, onlyNode));
    return __result;
END_RCPP
}
// node_length
int node_length(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_length(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    __result = Rcpp::wrap(node_length(node, onlyNode));
    return __result;
END_RCPP
}
// node_parents
Rcpp::List node_parents(XPtrNode node);
RcppExport SEXP xml2_node_parents(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_parents(node));
    return __result;
END_RCPP
}
// node_siblings
Rcpp::List node_siblings(XPtrNode node, bool onlyNode);
RcppExport SEXP xml2_node_siblings(SEXP nodeSEXP, SEXP onlyNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< bool >::type onlyNode(onlyNodeSEXP);
    __result = Rcpp::wrap(node_siblings(node, onlyNode));
    return __result;
END_RCPP
}
// node_parent
XPtrNode node_parent(XPtrNode n);
RcppExport SEXP xml2_node_parent(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    __result = Rcpp::wrap(node_parent(n));
    return __result;
END_RCPP
}
// node_write
void node_write(XPtrNode n, XPtrDoc d, std::string path);
RcppExport SEXP xml2_node_write(SEXP nSEXP, SEXP dSEXP, SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    node_write(n, d, path);
    return R_NilValue;
END_RCPP
}
// node_path
std::string node_path(XPtrNode n);
RcppExport SEXP xml2_node_path(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type n(nSEXP);
    __result = Rcpp::wrap(node_path(n));
    return __result;
END_RCPP
}
// nodes_duplicated
LogicalVector nodes_duplicated(List nodes);
RcppExport SEXP xml2_nodes_duplicated(SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type nodes(nodesSEXP);
    __result = Rcpp::wrap(nodes_duplicated(nodes));
    return __result;
END_RCPP
}
// node_type
int node_type(XPtrNode node);
RcppExport SEXP xml2_node_type(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    __result = Rcpp::wrap(node_type(node));
    return __result;
END_RCPP
}
// node_set_content
void node_set_content(XPtrNode node, std::string content);
RcppExport SEXP xml2_node_set_content(SEXP nodeSEXP, SEXP contentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type content(contentSEXP);
    node_set_content(node, content);
    return R_NilValue;
END_RCPP
}
// node_set_name
void node_set_name(XPtrNode node, std::string name);
RcppExport SEXP xml2_node_set_name(SEXP nodeSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    node_set_name(node, name);
    return R_NilValue;
END_RCPP
}
// node_new
XPtrNode node_new(std::string name);
RcppExport SEXP xml2_node_new(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    __result = Rcpp::wrap(node_new(name));
    return __result;
END_RCPP
}
// node_new_child
XPtrNode node_new_child(XPtrNode parent, std::string name, std::string content);
RcppExport SEXP xml2_node_new_child(SEXP parentSEXP, SEXP nameSEXP, SEXP contentSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type content(contentSEXP);
    __result = Rcpp::wrap(node_new_child(parent, name, content));
    return __result;
END_RCPP
}
// node_add_previous_sibling
XPtrNode node_add_previous_sibling(XPtrNode cur, XPtrNode elem);
RcppExport SEXP xml2_node_add_previous_sibling(SEXP curSEXP, SEXP elemSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type elem(elemSEXP);
    __result = Rcpp::wrap(node_add_previous_sibling(cur, elem));
    return __result;
END_RCPP
}
// node_add_sibling
XPtrNode node_add_sibling(XPtrNode cur, XPtrNode elem);
RcppExport SEXP xml2_node_add_sibling(SEXP curSEXP, SEXP elemSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type elem(elemSEXP);
    __result = Rcpp::wrap(node_add_sibling(cur, elem));
    return __result;
END_RCPP
}
// node_add_next_sibling
XPtrNode node_add_next_sibling(XPtrNode cur, XPtrNode elem);
RcppExport SEXP xml2_node_add_next_sibling(SEXP curSEXP, SEXP elemSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type cur(curSEXP);
    Rcpp::traits::input_parameter< XPtrNode >::type elem(elemSEXP);
    __result = Rcpp::wrap(node_add_next_sibling(cur, elem));
    return __result;
END_RCPP
}
// node_new_prop
XPtrNode node_new_prop(XPtrNode node, std::string name, std::string value);
RcppExport SEXP xml2_node_new_prop(SEXP nodeSEXP, SEXP nameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type value(valueSEXP);
    __result = Rcpp::wrap(node_new_prop(node, name, value));
    return __result;
END_RCPP
}
// url_absolute
CharacterVector url_absolute(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_absolute(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    __result = Rcpp::wrap(url_absolute(x, base));
    return __result;
END_RCPP
}
// url_relative
CharacterVector url_relative(CharacterVector x, CharacterVector base);
RcppExport SEXP xml2_url_relative(SEXP xSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type base(baseSEXP);
    __result = Rcpp::wrap(url_relative(x, base));
    return __result;
END_RCPP
}
// url_parse
List url_parse(CharacterVector x);
RcppExport SEXP xml2_url_parse(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(url_parse(x));
    return __result;
END_RCPP
}
// url_escape
CharacterVector url_escape(CharacterVector x, CharacterVector reserved);
RcppExport SEXP xml2_url_escape(SEXP xSEXP, SEXP reservedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type reserved(reservedSEXP);
    __result = Rcpp::wrap(url_escape(x, reserved));
    return __result;
END_RCPP
}
// url_unescape
CharacterVector url_unescape(CharacterVector x);
RcppExport SEXP xml2_url_unescape(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(url_unescape(x));
    return __result;
END_RCPP
}
// xpath_search
RObject xpath_search(XPtrNode node, XPtrDoc doc, std::string xpath, CharacterVector nsMap, double num_results);
RcppExport SEXP xml2_xpath_search(SEXP nodeSEXP, SEXP docSEXP, SEXP xpathSEXP, SEXP nsMapSEXP, SEXP num_resultsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrNode >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< XPtrDoc >::type doc(docSEXP);
    Rcpp::traits::input_parameter< std::string >::type xpath(xpathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type nsMap(nsMapSEXP);
    Rcpp::traits::input_parameter< double >::type num_results(num_resultsSEXP);
    __result = Rcpp::wrap(xpath_search(node, doc, xpath, nsMap, num_results));
    return __result;
END_RCPP
}
